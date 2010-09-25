/**
 * \file new_resource_view.hpp
 * \author Anthony Demange <tinou@tinou.fr>
 * \brief The new resource view class.
 */

#ifndef KEEP_STORED_RESOURCE_VIEW_HPP
#define KEEP_STORED_RESOURCE_VIEW_HPP

#include <QWidget>

#include <boost/shared_ptr.hpp>

class QLineEdit;
class QPushButton;
class AbstractResource;
class Category;

class ResourceView : public QWidget
{
	Q_OBJECT

	public:

		/**
		 * \brief Constructor.
		 */
		ResourceView(QWidget* parent = 0);

	private:

		QLineEdit* d_title_edit;
		QLineEdit* d_author_edit;
		QLineEdit* d_location_edit;
		QPushButton* d_submit_button;
		boost::shared_ptr<AbstractResource> d_resource;

signals:
		void resourceAdded(boost::shared_ptr<Category> category, boost::shared_ptr<AbstractResource> resource);

public slots:
	void save();
void loadResource(boost::shared_ptr<AbstractResource> resource);
};

#endif /* KEEP_STORED_RESOURCE_VIEW_HPP */

