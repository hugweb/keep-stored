/**
 * \file category.hpp
 * \author Anthony Demange <tinou@tinou.fr>
 * \brief The category class.
 */

#ifndef KEEP_STORED_CATEGORY_HPP
#define KEEP_STORED_CATEGORY_HPP

#include <QList>
#include <QMetaType>

#include <boost/shared_ptr.hpp>

#include <list>
#include <systools/string.hpp>

namespace systools
{
	namespace xml
	{
		class XmlNode;
		class XmlWriter;
	}
}

class AbstractResource;

class Category
{
	public:

		static void saveToXml(boost::shared_ptr<Category> category, boost::shared_ptr<systools::xml::XmlWriter> xml_writer);

		static boost::shared_ptr<Category> createFromXmlNode(boost::shared_ptr<systools::xml::XmlNode> xml_node);

		/**
		 * \brief Constructor.
		 */
		Category();

		/**
		 * \brief Constructor.
		 */
		Category(boost::shared_ptr<systools::xml::XmlNode> xml_node);

		/**
		 * \brief Get the title.
		 */
		systools::String title();

		/**
		 * \brief Set the title.
		 */
		void setTitle(systools::String title);

		/**
		 * \brief Get the resource list.
		 */
		QList<boost::shared_ptr<AbstractResource> > resourceList();

		void addResource(boost::shared_ptr<AbstractResource> resource);

		void removeResource(int row);

	private:

		/**
		 * \brief The title.
		 */
		systools::String d_title;

		/**
		 * \brief The associated resource list.
		 */
		QList<boost::shared_ptr<AbstractResource> > d_resource_list;

};

#endif /* KEEP_STORED_CATEGORY_HPP */


